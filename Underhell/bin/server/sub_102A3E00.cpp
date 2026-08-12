void __thiscall sub_102A3E00(int this)
{
  unsigned int v2; // eax
  int *v3; // ecx
  int v4; // eax
  int v5; // eax
  unsigned int v6; // eax
  int v7; // ecx
  char v8; // bl
  int v9; // edi
  int v10; // ebx
  double v11; // st7
  bool v12; // zf
  double v13; // st7
  char v14; // [esp+7h] [ebp-1h]

  v2 = *(_DWORD *)(this + 68);
  if ( v2 != -1 )
  {
    v3 = &off_1061BE18[4 * (*(_DWORD *)(this + 68) & 0xFFF) + 1];
    if ( v3[1] == v2 >> 12 )
    {
      if ( *v3 )
      {
        v4 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 52))(this);
        v5 = sub_1007DB30((_DWORD *)(v4 + 52), 100011);
        sub_10023E00(*(char **)(this + 4), v5);
        v6 = *(_DWORD *)(this + 68);
        if ( v6 == -1 || off_1061BE18[4 * (*(_DWORD *)(this + 68) & 0xFFF) + 2] != v6 >> 12 )
          v7 = 0;
        else
          v7 = off_1061BE18[4 * (*(_DWORD *)(this + 68) & 0xFFF) + 1];
        if ( (*(unsigned __int8 (__thiscall **)(int, _DWORD, int))(*(_DWORD *)(v7 + 1488) + 4))(
               v7 + 1488,
               *(_DWORD *)(this + 4),
               1) )
        {
          v8 = 0;
          v14 = 0;
          v9 = sub_1025FB50(1);
          if ( v9 )
          {
            v10 = *(_DWORD *)(this + 4);
            if ( (*(_DWORD *)(v10 + 252) & 0x800) != 0 )
              sub_100DAE60(*(_DWORD *)(this + 4));
            v8 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v9 + 872))(v9, v10 + 580);
            v14 = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 1088))(v9);
          }
          if ( *(_BYTE *)(this + 66) )
          {
            *(float *)(this + 144) = *(float *)(dword_106B31C8 + 12)
                                   - sub_100E92C0((_DWORD *)*(_DWORD *)(this + 4), 0)
                                   + *(float *)(this + 144);
          }
          else
          {
            *(float *)(this + 144) = 0.0;
            *(float *)(this + 148) = 0.0;
          }
          if ( *(float *)(this + 144) > 4.0 && *(float *)(dword_106B31C8 + 12) > (double)*(float *)(this + 140) )
            sub_1004C1E0((char **)this, 100012);
          if ( v8 || v14 )
          {
            *(float *)(this + 148) = 0.0;
          }
          else
          {
            v11 = sub_100E92C0((_DWORD *)*(_DWORD *)(this + 4), 0);
            v12 = *(_BYTE *)(this + 66) == 0;
            v13 = *(float *)(dword_106B31C8 + 12) - v11 + *(float *)(this + 148);
            *(float *)(this + 148) = v13;
            if ( !v12 )
            {
              if ( v13 <= 1.0 )
                return;
              goto LABEL_23;
            }
            if ( *(int *)(this + 156) >= 4 )
LABEL_23:
              sub_1004C1E0((char **)this, 100011);
          }
        }
      }
    }
  }
}
