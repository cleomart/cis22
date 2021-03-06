/*
 * Message.h
 *
 *  Created on: Dec 11, 2016
 *      Author: hellenpacheco
 */

#ifndef MESSAGE_H_
#define MESSAGE_H_

#include <fstream>
#include <string>

class Message
{
private:
	char *message;   // holds the message
	int length;  // holds the the message length
	static const short ALPHABET_SIZE = 26;
	char code[ALPHABET_SIZE]; // holds the cypher alphabet
	      // iztohndbeqrkglmacsvwfuypjx
	      // ex: an 'a' in the original message should be converted to 'i', 'b' should be converted to 'z' and so forth

	// returns the input file size in bytes
	std::streamsize getFileSize(std::fstream &file) const
	{
		std::streamsize fsize = 0;
		file.seekg (0, std::ios::end);
		fsize = file.tellg();
		file.seekg (0, std::ios::beg); // moves file pointer back to the beginning
		return fsize;
	}
public:
	/*
	 * This constructor tries to open the file whose name is passed
	 * to it in filename. If file opens successfully, calls function
	 * getFileSize to determine how many bytes should be allocated
	 * for the message. Allocates space for message and reads the
	 * content from the file into it. Closes the file at the end.
	 * Member variable length should be set to the file size.
	 * If file cannot be found, length should be set to zero.
	 */
	Message(std::string filename);

	// The destructor frees the space allocated to message
	virtual ~Message();

	// Decodes the message
	void decode();

	// Capitalizes first letter in each sentence
	void fixCapitalization();

	// Prints the content of message on the screen
	void dump() const;

	// Returns true if the message is empty
	bool isEmpty() const;
};



#endif /* MESSAGE_H_ */
