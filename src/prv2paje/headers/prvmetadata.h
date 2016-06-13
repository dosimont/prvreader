#ifndef PRVMETADATA_H
#define PRVMETADATA_H

#include <string>
#include <vector>

using namespace std;

namespace prv2paje{

    class PrvMetaData
    {
    public:
        PrvMetaData();
        string getFile() const;
        void setFile(const string &value);

        long getDuration() const;
        void setDuration(long value);

        string getTimeUnit() const;
        void setTimeUnit(const string &value);

        int getApplications() const;
        void setApplications(int value);

        int getNodes() const;
        void setNodes(int value);

        string getComment() const;
        void setComment(const string &value);

        vector<int> *getCpus() const;
        void setCpus(vector<int> *value);

    private:
        string comment;
        string file;
        long int duration;
        string timeUnit;
        int applications;
        int nodes;
        vector<int> *cpus;
    };

}

#endif // PRVMETADATA_H
