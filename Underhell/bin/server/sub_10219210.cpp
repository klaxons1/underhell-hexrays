void __thiscall sub_10219210(_DWORD *this)
{
  unsigned int v2; // ecx
  int *v3; // eax
  unsigned int v4; // ecx
  int v5; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // esi
  _DWORD *v8; // edi
  int v9; // eax
  int v10; // eax
  int v11; // ecx
  double v12; // st7
  float v13; // [esp+Ch] [ebp-74h]
  int v14; // [esp+10h] [ebp-70h]
  float v15[24]; // [esp+20h] [ebp-60h] BYREF

  v2 = this[77];
  if ( v2 != -1 )
  {
    v3 = &off_1061BE18[4 * (v2 & 0xFFF) + 1];
    v4 = v2 >> 12;
    if ( v3[1] == v4 )
    {
      if ( *v3 )
      {
        v5 = v3[1] == v4 ? *v3 : 0;
        v6 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)v5 + 208))(v5);
        v7 = v6;
        if ( v6 )
        {
          v8 = sub_10001430(v6);
          if ( v8 )
          {
            if ( *(_DWORD *)(*(_DWORD *)(*v8 + 176) + 12 * sub_100BD8E0(v7) + *v8 + 4) )
            {
              if ( !this[203] )
              {
                sub_1001F130(v15);
                v9 = sub_100233D0(this);
                v10 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_106B31D0 + 72))(
                        dword_106B31D0,
                        *(_DWORD *)(v9 + 24));
                v11 = this[62];
                v15[15] = 4.0;
                LODWORD(v15[13]) = v10;
                if ( (v11 & 0x20000) != 0 )
                  v12 = 1.0;
                else
                  v12 = 2.0;
                v15[14] = v12;
                sub_1028E890("TeslaHitboxes", v15);
              }
              sub_1023C380((int)"RagdollBoogie.Zap", 0.0, 0);
              v14 = off_10645E38;
              v13 = ((double (__thiscall *)(int, _DWORD, _DWORD))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(
                      dword_106B31E4,
                      0.1,
                      0.30000001)
                  + *(float *)(dword_106B31C8 + 12);
              sub_100EC3F0(this, (int)sub_10219210, v13, v14);
            }
          }
        }
      }
    }
  }
}
