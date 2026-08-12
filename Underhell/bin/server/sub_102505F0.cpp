int __thiscall sub_102505F0(int *this)
{
  char **v2; // esi
  char *v3; // esi
  char *v4; // ebx
  int result; // eax

  v2 = (char **)(this + 229);
  sub_102609C0(this + 229, "Plat.DefaultMoving");
  sub_102609C0(this + 230, "Plat.DefaultArrive");
  v3 = *v2;
  if ( !v3 )
    v3 = (char *)String;
  sub_1023B8B0(v3);
  v4 = (char *)this[230];
  if ( !v4 )
    v4 = (char *)String;
  sub_1023B8B0(v4);
  result = (*(int (__thiscall **)(int *))(*this + 724))(this);
  if ( !(_BYTE)result )
    return sub_10250160(this[6]);
  return result;
}
