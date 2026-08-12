__int16 __thiscall sub_1024DF80(char **this)
{
  char **v2; // edi
  char **v3; // esi
  char *v4; // edi
  char *v5; // esi

  v2 = this + 229;
  sub_102609C0(this + 229, "Plat.DefaultMoving");
  v3 = this + 230;
  sub_102609C0(v3, "Plat.DefaultArrive");
  v4 = *v2;
  if ( !v4 )
    v4 = (char *)String;
  sub_1023B8B0(v4);
  v5 = *v3;
  if ( !v5 )
    v5 = (char *)String;
  return sub_1023B8B0(v5);
}
