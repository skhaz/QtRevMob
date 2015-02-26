#ifndef REVMOB_H
#define REVMOB_H

#include <QObject>

class RevMob
{
    public:
        static RevMob *instance();

        void startSession(const QString& appId);

        void showFullscreen();

        void showPopup();
};

#endif
