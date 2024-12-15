void ViewMeritList()
{
	system("cls");
	header();
	cout << "Merit List >>" << endl;
	cout << "-----------------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "Rank" << "\t\t" << "Name" << "\t\t" << "Merit Aggregate" << "\t\t" << endl;
	for (int i = 0; i < studentCount; i++)
	{

		cout << i + 1 << "\t\t" << student[i] << "\t\t" << merit[i] << "\t\t" << endl;
	}
}
