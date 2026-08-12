void __thiscall sub_101095C0(int *this, float a2, int a3, int a4, int a5)
{
  float *v6; // esi
  int v7; // ebx
  int v8; // ebx
  char *v9; // eax
  char *v10; // [esp-Ch] [ebp-20h]
  float v11[3]; // [esp+8h] [ebp-Ch] BYREF

  v6 = (float *)sub_100422D0();
  if ( v6 )
  {
    (*(void (__thiscall **)(int, float *))(*(_DWORD *)dword_1041315C + 76))(dword_1041315C, v11);
    sub_10034B10(v6, v11);
    if ( (_BYTE)a3 )
    {
      if ( (*(int (__thiscall **)(int *))(*off_103DC72C[0] + 68))(off_103DC72C[0]) )
      {
        sub_10025420();
        sub_1002E560((char *)&a3 + 3, 1, 1);
        v7 = a4;
        sub_101085D0((int)this, a4, a4);
        if ( LOBYTE(a2) )
          sub_10107CA0();
        if ( sub_10109400(this, a2, v6, v7, a5) )
        {
          sub_1002B550();
          sub_10034B10(v6, v11);
          v8 = *this;
          v10 = sub_10034AE0((char *)v6);
          v9 = sub_10034A00((char *)v6);
          (*(void (__thiscall **)(int *, float *, char *, char *, float *))(v8 + 80))(this, v6, v9, v10, v6 + 55);
        }
        else
        {
          sub_1002B550();
        }
      }
      else
      {
        (*(void (__thiscall **)(float *, float *))(*(_DWORD *)v6 + 1064))(v6, v11);
      }
    }
  }
}
