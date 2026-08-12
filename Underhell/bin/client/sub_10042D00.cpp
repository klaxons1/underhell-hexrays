int __thiscall sub_10042D00(float *this)
{
  int v1; // edi

  v1 = dword_1047CA8C;
  (*(void (__thiscall **)(int))(*(_DWORD *)dword_1047CA8C + 100))(dword_1047CA8C);
  if ( (*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)this + 500))(this) )
  {
    if ( !(unsigned __int8)sub_1005E470(this) )
      (*(void (__thiscall **)(float *))(*(_DWORD *)this + 916))(this);
    if ( ((_BYTE)this[183] & 1) != 0 )
      this[887] = 0.0;
    if ( *((_DWORD *)this + 452) == -1 )
      sub_10029860((int)this, 0);
    (*(void (__thiscall **)(float *))(*(_DWORD *)this + 676))(this);
  }
  sub_10013A70(this);
  return (*(int (__thiscall **)(int))(*(_DWORD *)v1 + 104))(v1);
}
