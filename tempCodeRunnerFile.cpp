
                if(comp(lib[i].a, b)) break;
            }
            if (i == k) cout << "book not found";
            else {
                if (lib[i].patron !=0) cout << "sorry book already taken";
                else {
                    cout << " please enter your patron number : ";
                    cin >> lib[i].patron; 
                }
            }
            break;
        case 'r':
            cout << "enter the book sno you want to return" << endl;
            int rsno;
            cin >> rsno;
            int j;
            for (int j = 0; j < k; j++){
                if (lib[j].sno = rsno ) 