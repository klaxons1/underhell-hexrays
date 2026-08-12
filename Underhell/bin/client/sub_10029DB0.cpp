void __thiscall sub_10029DB0(_DWORD *this, int a2, float a3)
{
  _DWORD *v4; // eax
  int v5; // [esp+10h] [ebp-4h] BYREF

  if ( !this[485] && (*(int (__thiscall **)(_DWORD *))(this[1] + 36))(this + 1) )
    sub_10026520((int)this);
  v4 = (_DWORD *)this[485];
  if ( !v4 || !*v4 )
    v4 = 0;
  v5 = this[a2 + 421];
  sub_1001D770((int)v4, a2, a3, (float *)&v5);
  this[a2 + 421] = v5;
}
