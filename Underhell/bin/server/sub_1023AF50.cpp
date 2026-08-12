int __usercall sub_1023AF50@<eax>(char *a1@<esi>, int a2)
{
  if ( !sub_10429530(a1, ".wav") && !sub_10429530(a1, ".mp3") )
    return (*(int (__thiscall **)(int, char *, int))(*(_DWORD *)dword_106B3204 + 64))(dword_106B3204, a1, a2);
  if ( sub_10429530(a1, ".wav") )
    sub_1023A8F0(a1, "UTIL_TranslateSoundName");
  return (int)a1;
}
