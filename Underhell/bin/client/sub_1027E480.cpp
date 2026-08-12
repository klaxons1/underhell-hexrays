int __thiscall sub_1027E480(int this)
{
  int v2; // edi
  int v3; // ebx
  int v4; // eax
  int v5; // eax
  int result; // eax
  int v7; // [esp+18h] [ebp-18h] BYREF
  int v8; // [esp+1Ch] [ebp-14h] BYREF
  int v9; // [esp+20h] [ebp-10h] BYREF
  int v10; // [esp+24h] [ebp-Ch] BYREF
  int v11; // [esp+28h] [ebp-8h] BYREF
  int v12; // [esp+2Ch] [ebp-4h] BYREF

  sub_102361D0((int (__thiscall ***)(void *, int, int))this, (int)&v12, (int)&v11);
  v2 = dword_1047CA7C;
  v3 = *(_DWORD *)dword_1047CA7C;
  v4 = (*(int (__thiscall **)(int))(*(_DWORD *)this + 80))(this);
  v5 = (*(int (__thiscall **)(int, int))(v3 + 32))(v2, v4);
  result = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)v5 + 8))(v5, "BrowserBorder");
  v10 = 0;
  v9 = 0;
  v8 = 0;
  v7 = 0;
  if ( result )
    result = (*(int (__thiscall **)(int, int *, int *, int *, int *))(*(_DWORD *)result + 16))(
               result,
               &v10,
               &v9,
               &v8,
               &v7);
  if ( *(_DWORD *)(this + 212) )
    return (*(int (__thiscall **)(_DWORD, int, int, int, int))(**(_DWORD **)(this + 212) + 20))(
             *(_DWORD *)(this + 212),
             v10 + *(_DWORD *)(this + 248),
             v9 + *(_DWORD *)(this + 252),
             v12 - *(_DWORD *)(this + 256) - v8,
             v11 - *(_DWORD *)(this + 260) - v7);
  return result;
}
