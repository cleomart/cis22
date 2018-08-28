void selectionSort(vector<int>&u, int size);
//sort the test scores in the vector from least to greatest

void selectionSort(vector<int>&u)
{
    int startScan, minIndex, minValue;
    for (startScan = 0; startScan < u.size()-1; startScan++)
    {
        minIndex = startScan;
        minValue = u[startScan];
        for (int index = startScan + 1; index < u.size(); index++)
        {
            if(u[index] < minValue)
            {
                minValue = u[index];
                minIndex = index;
            }
        }
        u[minIndex] = u[startScan];
        u[startScan] = minValue;
    }
}
