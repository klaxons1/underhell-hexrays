void __thiscall sub_103953B0(int *this, _DWORD *a2)
{
  float *v2; // esi
  const char *v3; // eax
  float v4; // edi
  char *v5; // eax
  _DWORD *v6; // edi
  _DWORD *v7; // eax
  float v8; // eax
  void (__thiscall *v9)(float *, _DWORD *); // edx
  _DWORD v10[2]; // [esp+28h] [ebp-8h] BYREF

  v2 = (float *)this;
  switch ( *a2 )
  {
    case 3:
      if ( sub_100CF460(this) && sub_1001ED60(v2 + 1407) )
      {
        v3 = *(const char **)(sub_100CF460(v2) + 92);
        if ( !v3 )
          v3 = String;
        v4 = *v2;
        v5 = sub_1025F440("attacking_with_weapon:%s", v3);
        if ( (*(unsigned __int8 (__thiscall **)(float *, const char *, char *, _DWORD, _DWORD, _DWORD))(LODWORD(v4) + 2344))(
               v2,
               "TLK_ATTACKING",
               v5,
               0,
               0,
               0) )
        {
          sub_100925F0(v2 + 1407, 10.0, 30.0);
        }
      }
      goto LABEL_9;
    case 0xE:
      if ( *((_BYTE *)this + 4448) )
      {
        (*(void (__thiscall **)(int *, const char *, _DWORD, _DWORD, _DWORD, _DWORD))(*this + 2344))(
          this,
          "TLK_PLPUSH",
          0,
          0,
          0,
          0);
        sub_10094F60(v2, a2);
      }
      else
      {
LABEL_9:
        this = (int *)v2;
LABEL_10:
        sub_10094F60(this, a2);
      }
      return;
    case 0x58:
      (*(void (__thiscall **)(int *))(*this + 2420))(this);
      sub_10022750(v2, 0.5, 0.0);
      return;
    case 0x97:
      if ( sub_10023D10(this, 61) )
        sub_10027CD0(v2, 0);
      return;
    case 0x98:
      v6 = (_DWORD *)this[647];
      v7 = (_DWORD *)sub_101C5260(this);
      sub_10394D20(v6, v7);
      v8 = *v2;
      *(float *)&v10[1] = 48.0;
      v9 = *(void (__thiscall **)(float *, _DWORD *))(LODWORD(v8) + 1256);
      v10[0] = 14;
      v9(v2, v10);
      return;
    default:
      goto LABEL_10;
  }
}
