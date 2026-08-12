int *__thiscall sub_10251C70(void *this, _DWORD *a2)
{
  int *result; // eax
  int v4; // esi
  int v5; // [esp+10h] [ebp-308h] BYREF
  int v6; // [esp+14h] [ebp-304h] BYREF
  char Source[256]; // [esp+18h] [ebp-300h] BYREF
  char Destination[512]; // [esp+118h] [ebp-200h] BYREF

  nullsub_5((int)a2);
  (*(void (__thiscall **)(void *, char *, int))(*(_DWORD *)this + 780))(this, Source, 256);
  result = (int *)(*(int (__thiscall **)(void *, int *, int *))(*(_DWORD *)this + 1000))(this, &v6, &v5);
  if ( (_BYTE)result )
  {
    result = (int *)v6;
    if ( v6 != v5 )
    {
      v4 = v5 - v6;
      if ( v5 - v6 > 0 && v6 < 1024 )
      {
        sub_102282F0(Destination, &Source[v6], v4 + 1);
        Destination[v4] = 0;
        return sub_1022ABA0(a2, "text", Destination);
      }
    }
  }
  return result;
}
