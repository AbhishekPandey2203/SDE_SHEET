 ListNode* reverse(ListNode* node) {
        ListNode* temp = nullptr;
        while (node != nullptr) {
            ListNode* next1 = node->next;
            node->next = temp;
            temp = node;
            node = next1;
        }

        return temp;
    }

    ListNode* findkth(ListNode* temp, int k) {
        k = k - 1;
        while (temp != NULL && k > 0) {
            k--;
            temp = temp->next;

        }

        return temp;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {

        // Now i try the appraoch of reverse a particular to reverse the Kth
        // Node type

        // logic ye h ki hum k nodes ko reverse krenge then unhe link krege
        // so iske liye we define some pointer

        ListNode* temp = head;
        ListNode* prevlast = nullptr;

        while (temp != nullptr) {
            ListNode* Kthnode = findkth(temp, k);

            // check kahi kthnode is null
            if (Kthnode == nullptr) {
                if (prevlast)
                    prevlast->next = temp;
                break;
            }

            // kthnode ko point wala mil gya
            ListNode* nxt = Kthnode->next;
            Kthnode->next = nullptr;

            // calling the reverse function
            reverse(temp);

            // first time wala case
            if (temp == head) {
                head = Kthnode;
            } else {
                prevlast->next = Kthnode;
            }

            // then just update

            prevlast = temp;
            temp = nxt;
        }


        return head;
    }