void __thiscall sub_1017F350(int this, char *String2, float a3)
{
  _DWORD *v4; // eax

  if ( !*(_DWORD *)(this + 1940) && (*(int (__thiscall **)(int))(*(_DWORD *)(this + 4) + 36))(this + 4) )
    sub_10026520(this);
  v4 = *(_DWORD **)(this + 1940);
  if ( !v4 || !*v4 )
    v4 = 0;
  sub_100272D0((float *)this, (int)v4, String2, a3);
}
