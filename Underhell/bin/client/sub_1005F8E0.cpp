void __thiscall sub_1005F8E0(_DWORD *this, int a2)
{
  int *v3; // ebx
  int v4; // edi
  int v5; // eax
  int v6; // eax

  sub_1002B830((int)this, a2);
  if ( a2 )
  {
    v3 = (int *)this[44];
    if ( v3 )
    {
      v4 = *v3;
      v5 = (*(int (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*(this - 2) + 40))(
             this - 2,
             0,
             *((float *)off_103DC81C + 7));
      v6 = (*(int (__thiscall **)(_DWORD *, int))(*(this - 2) + 36))(this - 2, v5);
      (*(void (__thiscall **)(int *, int))(v4 + 272))(v3, v6);
    }
  }
  else
  {
    sub_1008FA90(6);
    sub_1000F520(this - 2, 0, 0, 0);
  }
}
