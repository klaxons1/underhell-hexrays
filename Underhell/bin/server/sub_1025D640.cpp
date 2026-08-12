int __userpurge sub_1025D640@<eax>(int a1@<ecx>, int a2@<edi>, _DWORD *a3)
{
  if ( *a3 )
    *(_DWORD *)(a1 + 800) = *(_DWORD *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)*a3 + 8))(*a3);
  else
    *(_DWORD *)(a1 + 800) = -1;
  return sub_1025C9A0(a1, a2);
}
