int __thiscall sub_10195A10(_DWORD *this, int a2)
{
  int v2; // ebx
  int result; // eax
  int i; // esi
  const char *v6; // [esp+Ch] [ebp-8h]
  int v7; // [esp+10h] [ebp-4h] BYREF

  v2 = a2;
  v7 = *((unsigned __int16 *)this + 6);
  result = (*(int (__thiscall **)(int, int *, int, int))(*(_DWORD *)(dword_106B31D8 + 4) + 4))(
             dword_106B31D8 + 4,
             &v7,
             2,
             a2);
  for ( i = 0; i < this[3]; ++i )
  {
    v6 = (const char *)sub_1019D450(*(_DWORD *)(*this + 4 * i));
    a2 = (unsigned __int16)(strlen(v6) + 1);
    (*(void (__thiscall **)(int, int *, int, int))(*(_DWORD *)(dword_106B31D8 + 4) + 4))(dword_106B31D8 + 4, &a2, 2, v2);
    result = (*(int (__thiscall **)(int, const char *, _DWORD, int))(*(_DWORD *)(dword_106B31D8 + 4) + 4))(
               dword_106B31D8 + 4,
               v6,
               (unsigned __int16)a2,
               v2);
  }
  return result;
}
