char __thiscall sub_10098310(float *this, _DWORD *a2)
{
  char result; // al
  int v4; // eax
  int v5; // edi
  char v6; // al

  result = sub_10093A00((int)this, 0, 0);
  if ( result )
  {
    v4 = sub_10093460(this, 17);
    v5 = v4;
    result = 0;
    if ( v4 )
    {
      if ( sub_10098230(this, "TLK_HELLO", 0, v4, a2)
        || 0.0 != this[1095]
        && *(float *)(dword_106B31C8 + 12) - this[1095] > 6.0
        && !(*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)this + 296))(this)
        && sub_10098230(this, "TLK_STARE", 0, v5, a2) )
      {
        return 1;
      }
      v6 = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 296))(this);
      if ( sub_10096D90(this, (int)"TLK_IDLE", v6 != 0 ? 20 : 2) )
      {
        if ( sub_10098230(this, "TLK_IDLE", 0, v5, a2) )
          return 1;
      }
    }
  }
  return result;
}
