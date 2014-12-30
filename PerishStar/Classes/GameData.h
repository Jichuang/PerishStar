#ifndef __GameData_H__
#define __GameData_H__

class GameData
{
public:
	static GameData* getInstance();

	//��ǰ�ȼ�
	void setCurlevel(int level);
	inline int getCurLevel()
	{
		return cur_level;
	}

	//��һ�ȼ�
	inline int getNextLevel()
	{
		return next_level;
	}

	//��߷�
	inline void setHistoryScore(int score)
	{
		history_score=score;
	}
	inline int getHistoryScore()
	{
		return history_score;
	}

	//��ǰ����
	inline void setCurScore(int score)
	{
		cur_score=score;
	}
	inline int getCurScore()
	{
		return cur_score;
	}

	//ͨ�ط���
	inline int getNextScore()
	{
		return next_score;
	}
	inline int getScoreByLevel(int level);

	//��������
	int getReward(int size);

	void saveHighesScore();

private:
	GameData();
	void init();

private:
	static GameData* m_instance;
	int cur_level;
	int next_level;
	int history_score;
	int cur_score;
	int next_score;
	friend class MenuLayer;
};


#endif //__GameData_H__