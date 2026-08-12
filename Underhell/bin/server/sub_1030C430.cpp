void __thiscall sub_1030C430(int *this, int a2)
{
  int *v3; // esi
  float v4; // [esp+4h] [ebp-64h]
  _DWORD v5[20]; // [esp+18h] [ebp-50h] BYREF

  if ( (*(unsigned __int8 (__thiscall **)(int *))(*this + 264))(this) )
  {
    v3 = this + 55;
    if ( this[55] != 1 )
    {
      (*(void (__thiscall **)(int *, int *))(*this + 464))(this, this + 55);
      *v3 = 1;
    }
    v4 = (float)*v3;
    sub_10248110((int)v5, (int)this, (int)this, v4, 1, 0);
    sub_100D9E70(this, (int)v3, v5);
  }
}
