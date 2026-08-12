char __userpurge sub_1000CDA0@<al>(float *a1@<ecx>, double a2@<st0>, int a3, int a4, int a5, char *Source)
{
  unsigned int v7; // eax
  float **v8; // ecx
  float *v9; // edi
  char result; // al
  int v11; // edi
  _DWORD *v12; // eax
  double v13; // st7
  int v14; // edi
  _DWORD *v15; // eax
  double v16; // st7
  float v17; // eax
  void (__thiscall *v18)(float *, int); // edx
  int v19[4]; // [esp+1Ch] [ebp-10h] BYREF
  float Sourcea; // [esp+40h] [ebp+14h]
  float Sourceb; // [esp+40h] [ebp+14h]

  v7 = *((_DWORD *)a1 + 490);
  if ( v7 != -1 )
  {
    v8 = (float **)((char *)off_103DCD74 + 16 * ((_DWORD)a1[490] & 0xFFF) + 4);
    if ( v8[1] == (float *)(v7 >> 12) )
    {
      v9 = *v8;
      if ( *v8 )
      {
        if ( (*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)v9 + 512))(*v8)
          && (*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)v9 + 504))(v9)
          && sub_10045780(0) )
        {
          result = (*(int (__thiscall **)(float *))(*(_DWORD *)v9 + 500))(v9);
          if ( !result )
            return result;
          sub_10011F00(Source);
          (*(void (__thiscall **)(float *))(*(_DWORD *)a1 + 860))(a1);
          (*(void (__thiscall **)(float *, int))(*(_DWORD *)a1 + 852))(a1, a5);
          sub_1000B7D0(a1);
          v9[754] = a2 + *((float *)off_103DC81C + 3);
        }
      }
    }
  }
  v11 = *((_DWORD *)a1 + 452);
  if ( !*((_DWORD *)a1 + 485) && (*(int (__thiscall **)(_DWORD *))(*((_DWORD *)a1 + 1) + 36))((_DWORD *)a1 + 1) )
    sub_10026520(a1);
  v12 = (_DWORD *)*((_DWORD *)a1 + 485);
  if ( !v12 || !*v12 )
    v12 = 0;
  v13 = sub_10025700(v12, v11) + *((float *)off_103DC81C + 3);
  Sourcea = v13;
  if ( *((_DWORD *)a1 + 493) != LODWORD(Sourcea) )
    a1[493] = v13;
  v14 = *((_DWORD *)a1 + 452);
  if ( !*((_DWORD *)a1 + 485) && (*(int (__thiscall **)(_DWORD *))(*((_DWORD *)a1 + 1) + 36))((_DWORD *)a1 + 1) )
    sub_10026520(a1);
  v15 = (_DWORD *)*((_DWORD *)a1 + 485);
  if ( !v15 || !*v15 )
    v15 = 0;
  v16 = sub_10025700(v15, v14) + *((float *)off_103DC81C + 3);
  Sourceb = v16;
  if ( *((_DWORD *)a1 + 494) != LODWORD(Sourceb) )
    a1[494] = v16;
  v17 = *a1;
  a1[528] = 0.0;
  *((_WORD *)a1 + 1052) = 0;
  v18 = *(void (__thiscall **)(float *, int))(LODWORD(v17) + 912);
  a1[527] = *((float *)off_103DC81C + 3) + 5.0;
  v18(a1, 1);
  sub_10011170((int)v19, 0, 0, 0, -1, 0.0, (int)"BaseCombatWeapon_HideThink");
  return 1;
}
