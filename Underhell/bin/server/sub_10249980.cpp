void __thiscall sub_10249980(int *this)
{
  unsigned int v2; // eax
  int v3; // edi
  void (__noreturn ***v4)(); // esi
  int *v5; // ecx
  int v6; // esi
  int v7; // ecx
  BOOL v8; // esi
  float v9; // [esp+0h] [ebp-18h]
  float v10; // [esp+0h] [ebp-18h]
  float v11; // [esp+0h] [ebp-18h]
  int v12; // [esp+14h] [ebp-4h]

  v2 = this[200];
  if ( v2 == -1 || (v5 = &off_1061BE18[4 * (this[200] & 0xFFF) + 1], v5[1] != v2 >> 12) )
  {
    v3 = 0;
  }
  else
  {
    v3 = *v5;
    if ( *v5 && !*(_BYTE *)(v3 + 224) )
    {
      v6 = 0;
      v12 = 0;
      if ( this[201] == -1
        || off_1061BE18[4 * (this[201] & 0xFFF) + 2] != (unsigned int)this[201] >> 12
        || (v7 = off_1061BE18[4 * (this[201] & 0xFFF) + 1]) == 0
        || (v6 = sub_10248CE0(*(_DWORD *)(v3 + 800), (float *)(v3 + 716), (float *)(v7 + 716)), (v12 = v6) == 0) )
      {
        if ( *(float *)(v3 + 108) <= 0.0 )
        {
          if ( *(float *)(v3 + 108) >= 0.0 )
            goto LABEL_23;
          v6 = 1;
        }
        else
        {
          v6 = -1;
        }
        v12 = v6;
      }
LABEL_23:
      v9 = *(float *)(dword_106B31C8 + 12) + 0.5;
      sub_100EC4A0(this, v9, 0);
      if ( v6 )
      {
        v10 = (float)v12;
        v8 = 0.0 != *(float *)(v3 + 108);
        sub_10253AA0(v3, v10, 0.0);
        if ( 0.0 == *(float *)(v3 + 108) )
        {
          if ( v8 )
            sub_10248950(this);
        }
        else if ( !v8 )
        {
          sub_10249730(this);
        }
      }
      else
      {
        sub_10248950(this);
        v11 = *(float *)(dword_106B31C8 + 12) + 1.0;
        sub_100EC4A0(this, v11, 0);
      }
      return;
    }
  }
  v4 = sub_1023DBA0();
  if ( this[203] )
    ((void (__thiscall *)(void (__noreturn ***)(), int))(*v4)[5])(v4, this[203]);
  if ( this[204] )
    ((void (__thiscall *)(void (__noreturn ***)(), int))(*v4)[5])(v4, this[204]);
  this[202] = 0;
  if ( v3 )
    sub_10248AF0(v3);
  sub_1025FAC0(this);
}
