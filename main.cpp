/*
 * File:   main.cpp
 * Author: adrian
 *
 * Created on 11 sierpnia 2015, 00:46
 */

#include <QtWidgets>

int main(int argc, char *argv[]) {
    // initialize resources, if needed
    // Q_INIT_RESOURCE(resfile);

    QApplication app(argc, argv);
    QTextStream cout(stdout);
    
    //Deklaracja zmiennych
    int answer = 0;
    
    do {
        //zmienne lokalne pętli
        int factArg = 0;
        int fact(1);
        factArg = QInputDialog::getInt(0,"Kalkulator silni", "Silnia:", 1);
        cout << "Uzytkownik wprowadził wartość: " << factArg << endl;
        int i = 2;
        while (i <= factArg) {
            fact = fact*i;
            ++i;
        }
        QString response = QString("%1 sinia to %2.\n%3").arg(factArg).arg(fact).arg("Wyliczymy inną silnię?");
        answer = QMessageBox::question(0, "Jeszcze raz?", response, QMessageBox::Yes | QMessageBox::No);
        
    } while (answer == QMessageBox::Yes);

    return EXIT_SUCCESS;
}
