// positive sp value has been detected, the output may be wrong!
void __thiscall sub_103BE970(int *this)
{
  int v2; // eax
  _DWORD *v3; // eax
  float v4; // [esp+4h] [ebp-10h]

  sub_10025DD0(this);
  (*(void (__thiscall **)(int *))(*this + 728))(this);
  v4 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)dword_106B31E4 + 4))(dword_106B31E4)
     + *(float *)(dword_106B31C8 + 12);
  sub_100EC4A0(this, v4, COERCE_INT(0.2));
  if ( (*(int (__thiscall **)(int *))(*this + 368))(this) )
  {
    v2 = (*(int (__thiscall **)(int *))(*this + 368))(this);
    if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v2 + 264))(v2) )
      sub_100285C0(this, 0, 1);
  }
  if ( !(*(int (__thiscall **)(int *))(*this + 368))(this) )
  {
    sub_100AC080(this[601], 1500);
    v3 = (_DWORD *)(*(int (__thiscall **)(int *))(*this + 1480))(this);
    sub_100285C0(this, v3, 1);
  }
  if ( (*(int (__thiscall **)(int *))(*this + 368))(this) )
  {
    sub_100EC3F0(this, (int)sub_103BE7A0, 0.0, 0);
    sub_1023C380(this, (int)"NPC_CeilingTurret.Alert", 0.0, 0);
  }
}
