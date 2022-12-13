// Proyecto1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>

using namespace std;

//Atributos del Enemigo
int enemyHP = 1000;
int enemyDamage = 30;
string enemyName = "Malo";
bool enemyIsAlive = true;
int damage = 500;


//Atributos del héroe
string heroName;
int heroDamage;
int heroHP = 2000;
bool heroIsAlive = true;





void startGame()
{
    cout << "El enemigo " << enemyName << " acaba de aparecer y tiene " << enemyHP << " de vida\n";
    cout << "Inserta el nombre del heroe que lo va a derrotar\n";
    cin >> heroName;
    cout << "El nombre del heroe es " << heroName << "\n";
}


int heroAttack(int pDamage) {

    return enemyHP - pDamage;
}


bool checkEnemyIsAlive() {
    if (enemyHP <= 0) {
        enemyHP = 0;
        //enemyIsAlive = false;
        cout << "Has derrotado al enemigo\n";
        return false;
    }
    else {
        cout << "Al enemigo le quedan " << enemyHP << " puntos de vida\n";
        return true;
    }

}

int enemyAttack() {
    if(rand()%5 > 0){
        enemyDamage = 1 + rand() % 100;
        return heroHP - enemyDamage;
    }
    else {
        return 0;
    }
}





int main()
{

    startGame();
    srand(time(NULL));
  //  while(enemyIsAlive && heroIsAlive){
            cout << "Cuanto daño quieres hacerle al enemigo?\n";
            cin >> heroDamage;
            enemyHP = heroAttack(100);
        
            if (checkEnemyIsAlive()) {
                heroHP = enemyAttack();
                cout << "El enemigo te ha hecho " << enemyDamage << " puntos de danyo y te quedan " << heroHP << " puntos de vida\n";
            }
 //   }
}
