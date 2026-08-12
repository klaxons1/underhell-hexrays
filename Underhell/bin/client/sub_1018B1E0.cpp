int __thiscall sub_1018B1E0(int this, int a2, char *Source, char *a4, char *a5)
{
  int v6; // eax

  sub_102282F0((char *)(this + 440), Source, 0xFFu);
  sub_102282F0((char *)(this + 695), a4, 0x800u);
  if ( a5 )
    sub_102282F0((char *)(this + 2743), a5, 0xFFu);
  else
    *(_BYTE *)(this + 2743) = 0;
  v6 = *(_DWORD *)(this + 428);
  *(_DWORD *)(this + 3000) = a2;
  return (*(int (__thiscall **)(int))(v6 + 16))(this + 428);
}
