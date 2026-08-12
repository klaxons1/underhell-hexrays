void __thiscall sub_102B8760(int this)
{
  double v2; // st7
  double v3; // st7
  int v4; // eax
  __int64 v5; // [esp-4h] [ebp-14h]
  float v6; // [esp+0h] [ebp-10h]
  float v7; // [esp+0h] [ebp-10h]
  float v8; // [esp+0h] [ebp-10h]
  float v9; // [esp+Ch] [ebp-4h]

  if ( !sub_10262560(*(_DWORD *)(this + 24)) )
  {
    v2 = *(float *)(dword_106B31C8 + 12);
LABEL_3:
    v6 = v2 + 0.5;
    sub_100EC4A0((int *)this, v6, 0);
    return;
  }
  if ( (dword_1069042C & 1) != 0 )
  {
    if ( *(_BYTE *)(this + 1128) )
      sub_102B7DB0(this, 0);
    v2 = *(float *)(dword_106B31C8 + 12);
    goto LABEL_3;
  }
  v7 = *(float *)(dword_106B31C8 + 12) + 0.1;
  sub_100EC4A0((int *)this, v7, 0);
  (*(void (__thiscall **)(int))(*(_DWORD *)this + 728))(this);
  if ( *(_DWORD *)(this + 1200) && *(float *)(dword_106B31C8 + 12) - *(float *)(this + 1196) >= 1.0 )
  {
    HIDWORD(v5) = this;
    LODWORD(v5) = this;
    sub_1010DD80((_DWORD *)(this + 1208), v5, 0.0);
    sub_102B8980(this, 2);
  }
  else
  {
    v3 = sub_102B7F20(this);
    if ( v3 > 245.0 )
    {
      if ( *(_BYTE *)(this + 1128) )
        sub_102B7DB0(this, 0);
    }
    else
    {
      if ( !*(_BYTE *)(this + 1128) )
      {
        sub_102B7DB0(this, 1);
        v9 = v3;
        v3 = v9;
      }
      if ( v3 <= 100.0 )
      {
        v4 = sub_1026A890((unsigned int *)(this + 1132));
        if ( !sub_102B6E80((_BYTE *)this, v4) )
        {
          if ( *(_BYTE *)(this + 1129) )
          {
            sub_102B8980(this, 4);
          }
          else
          {
            sub_100EC3F0((_DWORD *)this, (int)sub_102B8270, 0.0, 0);
            v8 = *(float *)(this + 1124) + *(float *)(dword_106B31C8 + 12);
            sub_100EC4A0((int *)this, v8, 0);
          }
        }
      }
    }
  }
}
