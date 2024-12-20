#ifndef TASKSCHEDULER_H
#define TASKSCHEDULER_H

class Scheduler{

    public :
        Scheduler(int n);
        void schedulering(QString numProcess, QString iteration, QString randomization);
        int processFinished;
        int processMaximum;
        bool canceled;
};


#endif // TASKSCHEDULER_H
