ofstream outFile;
outFile.open("testOut.txt");
iObj1 = 81;
outFile << "iObj1: " << iObj1 << endl;
iObj2 = iObj1++;
outFile << "iObj1: " << iObj1 << " iObj2: " << iObj2 << endl;
outFile.close();