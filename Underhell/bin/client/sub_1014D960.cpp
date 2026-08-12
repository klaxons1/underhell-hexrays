void __thiscall sub_1014D960(_DWORD **this, int a2)
{
  int v3; // eax
  int v4; // [esp+14h] [ebp-8h] BYREF
  int v5; // [esp+18h] [ebp-4h] BYREF

  if ( this[1] && this[2] )
  {
    (*(void (__thiscall **)(int, int *, int *))(*(_DWORD *)dword_10439968 + 72))(dword_10439968, &v5, &v4);
    (*(void (__stdcall **)(int))(*this[1] + 12))(v5);
    (*(void (__stdcall **)(int))(*this[2] + 12))(v4);
    if ( (unsigned __int8)sub_101BC880() )
    {
      v3 = ((int (__thiscall *)(_DWORD **))(*this)[3])(this);
      sub_101BCA60(v3);
    }
  }
}
