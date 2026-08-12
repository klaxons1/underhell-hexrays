char __thiscall sub_100E1810(_DWORD *this)
{
  int v2; // eax
  int v3; // edi
  int v4; // ebx
  int v5; // ecx
  _DWORD *v6; // edi
  int v7; // eax
  int v8; // eax
  int v9; // ecx
  float v11[3]; // [esp+Ch] [ebp-14h] BYREF
  int v12; // [esp+18h] [ebp-8h]
  int v13; // [esp+1Ch] [ebp-4h]

  v2 = sub_100422D0();
  v3 = v2;
  v4 = 0;
  v13 = v2;
  if ( v2 )
  {
    LOBYTE(v2) = *(_BYTE *)(v2 + 388) >> 2;
    if ( (*(_BYTE *)(v3 + 388) & 4) == 0 )
    {
      sub_10038150(v3);
      v11[0] = *(float *)(v3 + 244);
      v11[1] = *(float *)(v3 + 248);
      v11[2] = *(float *)(v3 + 252);
      v12 = 0;
      if ( (int)this[4] > 0 )
      {
        do
        {
          v5 = *(_DWORD *)(this[1] + v4 + 88);
          v6 = off_103DCD78;
          v7 = (*(int (__thiscall **)(int))(*(_DWORD *)(v5 + 8) + 36))(v5 + 8);
          v8 = sub_1007A6A0(v6, v7);
          if ( v8 )
          {
            v9 = v13;
            if ( v8 != v13 )
            {
              *(_DWORD *)(this[1] + v4 + 88) = v8;
              sub_100399E0(v9, (float *)(v4 + this[1]));
              sub_100F8C70(v13, this[1] + v4 + 12);
            }
          }
          v4 += 96;
          ++v12;
        }
        while ( v12 < this[4] );
        v3 = v13;
      }
      sub_100399E0(v3, v11);
      LOBYTE(v2) = (*(int (__thiscall **)(_DWORD *))(*this + 4))(this);
    }
  }
  return v2;
}
