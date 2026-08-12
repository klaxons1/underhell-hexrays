void __thiscall sub_100D7BE0(int this)
{
  _DWORD *v1; // ebx
  bool v2; // zf
  const char *v3; // eax
  int *v4; // esi
  int v5; // edi
  int v6; // edx
  int v7; // eax
  int v8; // ecx
  double v9; // st7
  int v10; // edx
  int v11; // ecx
  int v12; // edi
  int v13; // edi
  int v14; // [esp+Ch] [ebp-224h]
  char Buffer[512]; // [esp+20h] [ebp-210h] BYREF
  int *v16; // [esp+220h] [ebp-10h]
  _DWORD *v17; // [esp+224h] [ebp-Ch]
  int v18; // [esp+228h] [ebp-8h]
  int v19; // [esp+22Ch] [ebp-4h]

  v1 = (_DWORD *)this;
  v2 = (*(_BYTE *)(this + 236) & 0x10) == 0;
  v17 = (_DWORD *)this;
  if ( !v2 )
  {
    if ( *(_DWORD *)(this + 260) )
      v3 = *(const char **)(this + 260);
    else
      v3 = *(const char **)(this + 92);
    if ( !v3 )
      v3 = String;
    sub_10429A00(Buffer, 0x200u, "[%s]", (char)v3);
    sub_100D5DE0(v1, 0, (int)Buffer, 0.0, 255, 255, 255, 255);
  }
  v4 = (int *)v1[60];
  v5 = 1;
  v19 = 0;
  v18 = 1;
  if ( v4 )
  {
    do
    {
      v6 = v4[3];
      v16 = (int *)v6;
      if ( (byte_10697279 || (double)v4[1] >= *(float *)(dword_106B31C8 + 12)) && v5 <= 10 )
      {
        v7 = 0;
        if ( !byte_10697279 )
        {
          v8 = v4[1];
          v19 = v4[2];
          v9 = (double)v19;
          v19 = v8 - v19;
          v7 = (int)((*(float *)(dword_106B31C8 + 12) - v9) / (double)v19 * 255.0);
        }
        v10 = 145;
        v11 = 185;
        v12 = 145;
        if ( v7 < 50 )
        {
          v11 = 255;
          v10 = 205;
          v12 = 205;
        }
        if ( v7 < 0 )
          v7 = 0;
        v1 = v17;
        v14 = v12;
        v13 = v18;
        sub_100D5DE0(v17, v18, *v4, 0.0, v11, v10, v14, 255 - v7);
        v5 = v13 + 1;
        v18 = v5;
        v19 = (int)v4;
      }
      else
      {
        if ( v19 )
          *(_DWORD *)(v19 + 12) = v6;
        else
          v1[60] = v6;
        sub_10184660(*v4);
        sub_10184660(v4);
      }
      v4 = v16;
    }
    while ( v16 );
  }
}
