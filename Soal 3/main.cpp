#include <iostream>

using namespace std;

int main()
{
    string nim, nama, grade, status;
    int nilai;

    cout << "Masukkan Data \n";

    // Input
    cout << "NIM:";
    cin >> nim;

    cout << "Nama:";
    cin >> nama;

    cout << "Nilai:";
    cin >> nilai;

    // Logic Grade
    if (nilai >= 80)
    {
        grade = "A";
    }
    else if (nilai >= 70)
    {
        grade = "B";
    }
    else if (nilai >= 60)
    {
        grade = "C";
    }
    else if (nilai >= 50)
    {
        grade = "D";
    }
    else
    {
        grade = "E";
    }

    // Logic Status
    if (grade == "A" || grade == "B" || grade == "C")
    {
        status = "Lulus";
    }
    else if (grade == "D")
    {
        status = "Mengulang";
    }
    else
    {
        status = "Tidak Lulus";
    }

    // Output
    cout << "\nNIM\tNAMA\tNILAI\tGRADE\tSTATUS\n";
    cout << "--------------------------------------\n";
    cout << nim << "\t" << nama << "\t" << nilai << "\t" << grade << "\t" << status << "\t";

    return 0;
}