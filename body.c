#include "header.h"

boolean isEmpty(address root){
	if(root == NULL){
		return true;
	}else{
		return false;
	}
}

Node* createNode(char question[]) {
    Node *newNode = (Node*) malloc(sizeof(Node));
    strcpy(newNode->question, question);
    newNode->yes = NULL;
    newNode->no = NULL;
    return newNode;
}

void Delete_Tree(Node *root) {
    if (root == NULL) return;
    Delete_Tree(root->yes);
    Delete_Tree(root->no);
    free(root);
}

void Print_Node(char leaf[]){
	printf("Anda didiagnosa : %s", leaf);
}

<<<<<<< HEAD
//void startAnalysis(Node *root) {
//    char answer[10];
//    printf("%s", root->question);
//    scanf("%s", answer);
//    if (strcmp(answer, "y") == 0) {
//        if (root->yes != NULL) startAnalysis(root->yes);
////        else printf("Anda menderita penyakit jantung!\n");
//    } else if (strcmp(answer, "n") == 0) {
//        if (root->no != NULL) startAnalysis(root->no);
//        else printf("Anda sehat.\n");
//    } else {
//        printf("Input tidak valid.\n");
//        startAnalysis(root);
//    }
//}

void startAnalysis(Node *root){
	char answer;
	do{
		printf("%s", root->question);
		scanf("%s", answer);
		
		if(strcmp(answer, "y") == 0){
			if(root->yes != NULL){
				root = root->yes;
			}
		}else if(strcmp(answer, "n") == 0){
			if(root->no != NULL){
				root = root->no;
			}
		}
		
	}while(root->yes != NULL || root->no != NULL);
	
	Print_Node(root->question);
=======
void startAnalysis(Node *root) {
    char answer[10];
    printf("%s", root->question);
    scanf("%s", answer);
    if (strcmp(answer, "y") == 0) {
        if (root->yes != NULL) startAnalysis(root->yes);
//        else printf("Anda menderita penyakit jantung!\n");
    } else if (strcmp(answer, "n") == 0) {
        if (root->no != NULL) startAnalysis(root->no);
        else printf("Anda sehat.\n");
    } else {
        printf("Input tidak valid.\n");
        startAnalysis(root);
    }
}

void medicalCheckUpResults () {
	//hasil cek kesehatan berdasarkan hasil dari startAnalysis
	
	//data hasil cek kesehatan yang telah diinputkan pengecek
	
	//rujukan yang didapat sesuai dengan hasil cek kesehatan
}

void medicalCheckUpRecommendation () {
	//rekomendasi hal-hal yang perlu dilakukan oleh pengecek
}

void medicalCheckUpDisclaimer () {
	//disclaimer
	
	printf ("This medical check up tool is not a substitute for a medical consultation. Always consult your doctor before deciding on treatment for an illness. This program does not provide medical advice, diagnosis, or treatment.");
>>>>>>> 79ccc9d6b4537f222b390cab911d5ec90eb63ee5
}
