#include "Account.h"
int main() {
    Account mBotescu("+407 123-456", "ID-111-222", "The master :D", Picture("red, green, blue", "unknown person"));
    mBotescu.print();
    Account * fMicota = new Account("+407 999-888", "ID-01-02", "Dean", Picture("black, white", "The dean of UVT"));
    fMicota->print();
    mBotescu.sendMessage(*fMicota, "Plangere legat de un laborator");
    fMicota->sendMessage(mBotescu, "Ce s-a intamplat??");
    delete fMicota;
    return 0;
}
