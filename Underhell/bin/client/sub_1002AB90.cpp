void __thiscall sub_1002AB90(_DWORD *this, int a2)
{
  _DWORD *v2; // ebx
  int v3; // eax
  int v4; // eax
  Concurrency::details::UMSThreadVirtualProcessor *v5; // edi
  struct Concurrency::IExecutionContext *DefaultDestination; // eax
  _DWORD *v7; // esi
  int v8; // eax
  float *v9; // [esp-10h] [ebp-20h]
  float *v10; // [esp-Ch] [ebp-1Ch]
  int v12; // [esp+8h] [ebp-8h]
  int v13; // [esp+Ch] [ebp-4h]

  v2 = this;
  v3 = this[307];
  if ( v3 )
  {
    v4 = *(_DWORD *)(v3 + 4080);
    if ( v4 > 0 )
    {
      v13 = 0;
      v12 = v4;
      do
      {
        v5 = (Concurrency::details::UMSThreadVirtualProcessor *)(v13 + v2[307]);
        if ( sub_1001CD70((float *)v5)
          && Concurrency::details::UMSThreadVirtualProcessor::GetDefaultDestination(v5) != (struct Concurrency::IExecutionContext *)-1 )
        {
          DefaultDestination = Concurrency::details::UMSThreadVirtualProcessor::GetDefaultDestination(v5);
          v7 = (_DWORD *)sub_1007A6A0(DefaultDestination);
          if ( v7 )
          {
            v10 = (float *)(*(int (__thiscall **)(_DWORD *))(*v7 + 40))(v7);
            v9 = (float *)(*(int (__thiscall **)(_DWORD *))(*v7 + 36))(v7);
            v8 = (*(int (__thiscall **)(_DWORD *))(v7[2] + 36))(v7 + 2);
            sub_1001CAD0((float *)v5, v8, v9, v10);
            v2 = this;
          }
        }
        v13 += 340;
        --v12;
      }
      while ( v12 );
    }
  }
}
