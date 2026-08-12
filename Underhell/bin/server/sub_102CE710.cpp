void __usercall sub_102CE710(unsigned __int16 *a1@<ecx>, int a2@<ebx>, int a3@<edi>)
{
  _BYTE *v4; // esi

  sub_102CD410(a1, a2, a3);
  v4 = (char *)a1 + 225;
  if ( *v4 )
  {
    (*(void (__thiscall **)(_BYTE *, _BYTE *))(*(_DWORD *)(v4 - 225) + 480))(v4 - 225, v4);
    *v4 = 0;
  }
}
