int __thiscall sub_100A52D0(_DWORD *this)
{
  int result; // eax

  *this = &CResponseSystem::`vftable';
  sub_102375F0(this + 331);
  sub_100A2160(this + 22);
  sub_100A09F0((int)(this + 22));
  sub_100A4010(this + 15);
  sub_100A36E0((int)(this + 15));
  sub_100A3FC0(this + 8);
  sub_100A3600((int)(this + 8));
  sub_100A44F0(this + 1);
  result = sub_100A4240((int)(this + 1));
  *this = &IResponseSystem::`vftable';
  return result;
}
