/*
 * StringParserClass.cpp
 *
 *  Created on: Oct 8, 2017
 *      Author: keith
 */

#include <string>
#include <string.h>
#include "../327_proj3_test/includes/StringParserClass.h"
#include "../327_proj3_test/includes/constants.h"

using namespace KP_StringParserClass;

class StringParserClass {
public:
	StringParserClass(void) {
		pStartTag = "";
		pEndTag = "";
		areTagsSet = false;
	}
	virtual ~StringParserClass(void) {
		cleanup();
	}

	int setTags(const char *pStart, const char *pEnd) {
		if (pStart == NULL || pEnd == NULL) {
			return ERROR_TAGS_NULL;
		}
		pStartTag = new char[strlen(pStart)];
		pEndTag = new char[strlen(pEnd)];

		strncpy(pStartTag, pStart, strlen(pStart));
		strncpy(pEndTag, pEnd, strlen(pEnd));

		areTagsSet = true;
		return SUCCESS;
	}

	int getDataBetweenTags(char *pDataToSearchThru, std::vector<std::string> &myVector) {
		myVector.clear();
		int count = 0;
		while(pDataToSearchThru[count] != NULL) {

		}
	}
private:
	void cleanup();

	int findTag(char *pTagToLookFor, char *&pStart, char *&pEnd) {
		int len = strlen(pTagToLookFor);
		if (pStart == NULL || pEnd == NULL) {
			return ERROR_TAGS_NULL;
		}
		int i = 0;
		while(*pEndTag != 0) {
			if (pStart[i] == '<') {
				for (int j = 0 ; j < len ; j++) {

				}
			}
		}
	}

	char *pStartTag;
	char *pEndTag;
	bool areTagsSet;
};
