int __thiscall sub_1023C6F0(void *this)
{
  int result; // eax

  sub_100E0780((int)this);
  result = dword_106C4FC4;
  if ( dword_106C4FC4 )
    result = sub_1025FAC0(dword_106C4FC4);
  dword_106C4FC4 = (int)this;
  return result;
}
