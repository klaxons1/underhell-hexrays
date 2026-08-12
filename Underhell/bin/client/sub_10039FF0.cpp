void sub_10039FF0()
{
  double v0; // st7
  int v1; // eax
  double v2; // st6
  int v3; // eax
  int v4; // ebx
  int *v5; // esi
  int v6; // edi
  char v7; // al
  float v8; // [esp+0h] [ebp-1Ch]
  int v9; // [esp+10h] [ebp-Ch]
  int v10; // [esp+14h] [ebp-8h]
  _BYTE v11[4]; // [esp+18h] [ebp-4h] BYREF

  v0 = sub_10073EA0();
  v1 = dword_10405848;
  if ( (dword_10405848 & 1) == 0 )
  {
    v1 = dword_10405848 | 1;
    flt_10405844 = v0;
    dword_10405848 |= 1u;
  }
  v2 = *(float *)(dword_10404C14 + 44);
  if ( (v1 & 2) == 0 )
  {
    flt_10405840 = *(float *)(dword_10404C14 + 44);
    dword_10405848 = v1 | 2;
  }
  if ( v0 != flt_10405844 || v2 != flt_10405840 )
  {
    flt_10405844 = v0;
    flt_10405840 = v2;
    sub_1007AA40(v11);
    v3 = sub_1007AE80(v11);
    v10 = v3;
    if ( v3 )
    {
      while ( 1 )
      {
        if ( v3 != -20 && *(int *)(v3 + 32) > 0 )
        {
          v4 = 0;
          v9 = *(_DWORD *)(v3 + 32);
          while ( 1 )
          {
            v5 = *(int **)(*(_DWORD *)(v3 + 20) + v4 + 8);
            v6 = *v5;
            v7 = (*(int (__thiscall **)(int *))(*v5 + 28))(v5);
            v8 = sub_10038610(v10, v7);
            (*(void (__thiscall **)(int *, _DWORD))(v6 + 8))(v5, LODWORD(v8));
            v4 += 12;
            if ( !--v9 )
              break;
            v3 = v10;
          }
        }
        v10 = sub_1007AE80(v11);
        if ( !v10 )
          break;
        v3 = v10;
      }
    }
  }
}
