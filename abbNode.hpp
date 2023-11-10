/*
 * abbNode.h
 *
 *  Created on: Sep 2, 2022
 *      Author: jsaavedr
 */


namespace trees {

class ABBNode {
private:
	ABBNode* ptrLeft;
	int data;
	ABBNode* ptrRight;
	int size;
public:
	ABBNode();
	ABBNode(int val);
	void setLeft(ABBNode* node);
	void setRight(ABBNode* node);
	void setData(int val);
	void setSize(int s);
	ABBNode* getLeft();
	ABBNode* getRight();
	int getData();
	int getSize();
	virtual ~ABBNode();
};

} /* namespace trees */
