void __userpurge sub_103CA830(int a1@<ecx>, int a2@<ebx>, int *a3)
{
  unsigned int v4; // eax
  int v5; // eax
  int v6; // ebx
  int v7; // ebx
  int v8; // eax
  int v9; // edx
  int v11; // [esp+8h] [ebp-Ch]

  if ( a3 && (*(unsigned __int8 (__thiscall **)(int *))(*a3 + 320))(a3) )
  {
    v4 = *(_DWORD *)(a1 + 804);
    if ( v4 == -1 || off_1061BE18[4 * (*(_DWORD *)(a1 + 804) & 0xFFF) + 2] != v4 >> 12 )
      v5 = 0;
    else
      v5 = off_1061BE18[4 * (*(_DWORD *)(a1 + 804) & 0xFFF) + 1];
    if ( a3 == (int *)v5 )
    {
      sub_1023C380((_DWORD *)a1, (int)"NPC_Vortigaunt.SuitOn", 0.0, 0);
      v6 = *(_DWORD *)(dword_106EBEFC + 48);
      if ( (*(int (__thiscall **)(int *, int))(*a3 + 1572))(a3, a2) < v6 )
      {
        v7 = *(_DWORD *)(dword_106EBF44 + 48);
        v11 = *(_DWORD *)(dword_106EBEFC + 48);
        v8 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_106B31E4 + 8))(dword_106B31E4, -1, 1);
        sub_101EC2E0(a3, v7 + v8, v11);
      }
      sub_101129A0((unsigned __int16 *)(a1 + 320), 4);
      sub_100E0970(a1, v9, 0, 0);
      (*(void (__thiscall **)(int, int *))(*(_DWORD *)a1 + 140))(a1, a3);
      sub_103C9F50(a1);
    }
  }
}
