void __thiscall sub_103C95E0(int this, unsigned int a2, unsigned int a3)
{
  unsigned int *v4; // esi
  float *v5; // eax
  void *v6; // eax
  int v7; // ebx
  int v8; // eax
  int v9; // eax
  int v10; // edx
  int v11; // eax
  float v12[3]; // [esp+4h] [ebp-Ch] BYREF

  if ( *(float *)(dword_106B31C8 + 12) >= (double)*(float *)(this + 5692) && a2 <= 2 && a3 < 2 )
  {
    v4 = (unsigned int *)(this + 4 * a3 + 5704);
    if ( !sub_1012B040(v4, 0)
      || (v5 = (float *)sub_10019640((_DWORD *)this),
          v6 = sub_103C7B20(v5, this),
          sub_10019680((_DWORD *)(this + 4 * a3 + 5704), (int)v6),
          !sub_1012B040((unsigned int *)(this + 4 * a3 + 5704), 0)) )
    {
      if ( a3 )
        v7 = *(_DWORD *)(this + 5840);
      else
        v7 = *(_DWORD *)(this + 5836);
      v8 = sub_1026A890(v4);
      (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v8 + 140))(v8, this, v7);
      v9 = sub_1026A890(v4);
      sub_100E0970(v9, v10, 0, 0);
      v12[0] = 8.0;
      v12[1] = 4.0;
      v12[2] = 0.0;
      v11 = sub_1026A890(v4);
      sub_100E10C0(v11, v12);
    }
  }
}
