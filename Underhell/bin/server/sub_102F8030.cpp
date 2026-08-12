int __thiscall sub_102F8030(_DWORD *this)
{
  _DWORD *v2; // esi
  int v3; // eax
  char *v4; // eax
  unsigned int v5; // ecx
  int *v6; // eax
  unsigned int v7; // ecx
  _DWORD *v8; // eax
  int v9; // eax
  _DWORD *v10; // esi
  char *v11; // eax
  char *v12; // eax
  char *v13; // eax
  char *v14; // eax
  const char *v15; // eax
  int result; // eax
  _DWORD v17[9]; // [esp+8h] [ebp-24h] BYREF

  v2 = this + 55;
  if ( this[55] != 80 )
  {
    (*(void (__thiscall **)(_DWORD *, _DWORD *))(*this + 464))(this, this + 55);
    *v2 = 80;
  }
  sub_1039B800(this);
  v3 = (*(int (__thiscall **)(_DWORD *))(*this + 1656))(this);
  sub_100B0060(v3, "TLK_HELLO", 0, 0);
  v4 = sub_10092840();
  if ( v4 )
  {
    *(float *)&v17[2] = -1.0;
    *(float *)&v17[3] = -1.0;
    *(float *)&v17[4] = -1.0;
    v17[0] = "TLK_ALYX_REQUEST_ITEM";
    *(float *)&v17[5] = -1.0;
    v17[1] = 1;
    *(float *)&v17[6] = -1.0;
    v17[8] = 4;
    *(float *)&v17[7] = -1.0;
    sub_10098130(v4, COERCE_FLOAT(v17));
  }
  v5 = this[1422];
  if ( v5 != -1 )
  {
    v6 = &off_1061BE18[4 * (this[1422] & 0xFFF) + 1];
    v7 = v5 >> 12;
    if ( off_1061BE18[4 * (this[1422] & 0xFFF) + 2] == v7 )
    {
      if ( *v6 )
      {
        if ( off_1061BE18[4 * (this[1422] & 0xFFF) + 2] == v7 )
          v8 = (_DWORD *)*v6;
        else
          v8 = 0;
        sub_100EAB80(v8, 512);
      }
    }
  }
  v9 = sub_100CF460(this);
  v10 = (_DWORD *)v9;
  if ( v9 )
  {
    v11 = (char *)dword_106E2788;
    if ( v10[23] == dword_106E2788 )
      goto LABEL_17;
    if ( !dword_106E2788 )
      v11 = (char *)String;
    if ( sub_100D6240(v10, v11) )
    {
LABEL_17:
      v9 = 1;
    }
    else
    {
      v12 = (char *)dword_106E2784;
      if ( v10[23] == dword_106E2784 )
        goto LABEL_22;
      if ( !dword_106E2784 )
        v12 = (char *)String;
      if ( sub_100D6240(v10, v12) )
      {
LABEL_22:
        v9 = 2;
      }
      else
      {
        v13 = (char *)dword_106E2780;
        if ( v10[23] == dword_106E2780 )
          goto LABEL_27;
        if ( !dword_106E2780 )
          v13 = (char *)String;
        if ( sub_100D6240(v10, v13) )
        {
LABEL_27:
          v9 = 3;
        }
        else
        {
          v14 = (char *)dword_106E277C;
          if ( v10[23] == dword_106E277C )
            goto LABEL_32;
          if ( !dword_106E277C )
            v14 = (char *)String;
          if ( sub_100D6240(v10, v14) )
LABEL_32:
            v9 = 4;
          else
            v9 = 5;
        }
      }
    }
  }
  this[1458] = v9;
  byte_106E27A0 = 0;
  v15 = *(const char **)(dword_106B31C8 + 60);
  if ( !v15 )
    v15 = String;
  result = sub_104292D0(v15, "ep2_outland_10", 14);
  if ( !result )
    byte_106E27A0 = 1;
  return result;
}
