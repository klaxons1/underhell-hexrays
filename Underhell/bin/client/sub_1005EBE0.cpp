int *__thiscall sub_1005EBE0(void *this)
{
  int v1; // esi
  int v3; // eax
  int v4; // ebx
  int *v5; // eax
  int *result; // eax
  int v7; // edi
  int v8; // eax
  int v9; // esi
  int v10; // [esp+Ch] [ebp-4h] BYREF

  v1 = dword_1040D914;
  if ( !dword_1040D914 )
  {
    v3 = sub_100B4A10("commentary");
    sub_100B66E0(v3, 0);
    v1 = dword_1040D914;
  }
  v4 = -1;
  if ( this )
  {
    v5 = (int *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 8))(this);
    v1 = dword_1040D914;
    v10 = *v5;
  }
  else
  {
    v10 = -1;
  }
  result = (int *)sub_1005DD80(&dword_1040D908, (int)&v10);
  if ( result == (int *)-1 )
  {
    if ( this )
    {
      v4 = *(_DWORD *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 8))(this);
      v1 = dword_1040D914;
    }
    v7 = v1;
    if ( v1 + 1 > dword_1040D90C )
    {
      sub_1010AFF0(v1 - dword_1040D90C + 1);
      v1 = dword_1040D914;
    }
    v8 = dword_1040D908;
    dword_1040D914 = v1 + 1;
    v9 = v1 - v7;
    dword_1040D918 = dword_1040D908;
    if ( v9 > 0 )
    {
      memcpy((void *)(dword_1040D908 + 4 * v7 + 4), (const void *)(dword_1040D908 + 4 * v7), 4 * v9);
      v8 = dword_1040D908;
    }
    result = (int *)(v8 + 4 * v7);
    if ( result )
      *result = v4;
  }
  return result;
}
