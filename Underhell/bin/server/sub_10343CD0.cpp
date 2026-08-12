void __thiscall sub_10343CD0(int *this)
{
  unsigned int v2; // eax
  double v3; // st7
  int v4; // edi
  int v5; // eax
  int v6; // eax
  int v7; // [esp-4h] [ebp-10h]
  float v8; // [esp+0h] [ebp-Ch]
  int v9; // [esp+4h] [ebp-8h]

  sub_10041D00(this);
  v2 = this[911];
  if ( v2 != -1 && off_1061BE18[4 * (this[911] & 0xFFF) + 2] == v2 >> 12 && off_1061BE18[4 * (this[911] & 0xFFF) + 1] )
    v3 = *(float *)(dword_106B31C8 + 12) + 0.03;
  else
    v3 = *(float *)(dword_106B31C8 + 12) + 0.1;
  v8 = v3;
  sub_100EC4A0(this, v8, 0);
  if ( (*(int (__thiscall **)(int *))(*this + 368))(this) )
  {
    v4 = dword_106B31C8;
    v7 = (*(int (__thiscall **)(int *))(*this + 368))(this);
    v5 = (*(int (__thiscall **)(int *))(*this + 1868))(this);
    if ( *(float *)(v4 + 12) - sub_10077680(v5, v7, 1) > 30.0 )
    {
      v9 = (*(int (__thiscall **)(int *))(*this + 368))(this);
      v6 = (*(int (__thiscall **)(int *))(*this + 1868))(this);
      sub_100780E0(v6, v9);
      sub_100285C0(this, 0, 1);
    }
  }
}
