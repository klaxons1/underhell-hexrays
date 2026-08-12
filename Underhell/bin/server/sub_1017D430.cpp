void __thiscall sub_1017D430(const char **this, unsigned int *a2)
{
  bool v2; // zf
  char *v4; // eax
  int v5; // edi
  const char **i; // ebx
  unsigned int v7; // eax
  unsigned int v8; // edx
  _DWORD *v9; // ebx
  unsigned int v10; // edx
  unsigned int v11; // edi
  _DWORD v12[5]; // [esp+10h] [ebp-1Ch] BYREF
  int v13; // [esp+24h] [ebp-8h]
  char *String2; // [esp+28h] [ebp-4h]

  v2 = a2[6] == 2;
  v13 = (int)this;
  if ( !v2 )
  {
    v4 = (char *)sub_1010D460((int)(a2 + 2));
    goto LABEL_5;
  }
  v4 = (char *)a2[2];
  if ( v4 )
  {
LABEL_5:
    String2 = v4;
    goto LABEL_6;
  }
  String2 = (char *)String;
LABEL_6:
  v5 = 0;
  for ( i = this + 200; !*i || _stricmp(*i, String2); ++i )
  {
    if ( ++v5 >= 16 )
    {
      v7 = a2[2];
      v8 = a2[4];
      v9 = (_DWORD *)v13;
      v12[1] = a2[3];
      v12[3] = a2[5];
      v12[0] = v7;
      v12[2] = v8;
      v10 = a2[6];
      v12[0] = v7;
      v11 = *a2;
      v12[4] = v10;
      sub_1010C270((float *)(v13 + 1272), 20, (__int16 *)v12);
      sub_1010DA50(v9 + 318, v9[318], v9[319], v9[320], v9[321], v9[322], __SPAIR64__((unsigned int)v9, v11), 0.0);
      return;
    }
  }
  sub_1010DD80((_DWORD *)(v13 + 8 * (3 * v5 + 111)), __SPAIR64__(v13, *a2), 0.0);
}
