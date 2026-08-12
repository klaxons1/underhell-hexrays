DName *__cdecl UnDecorator::getExternalDataType(DName *a1, int a2)
{
  int Memory; // eax
  struct DName *v3; // esi
  DName *v4; // eax
  _BYTE v6[8]; // [esp+4h] [ebp-18h] BYREF
  _DWORD v7[2]; // [esp+Ch] [ebp-10h] BYREF
  _DWORD v8[2]; // [esp+14h] [ebp-8h] BYREF

  Memory = _HeapManager::getMemory((_HeapManager *)&dword_10482840, 8u, 0);
  if ( Memory )
  {
    *(_DWORD *)Memory = 0;
    *(_BYTE *)(Memory + 4) = 0;
    *(_DWORD *)(Memory + 4) &= 0xFFFF00FF;
    v3 = (struct DName *)Memory;
  }
  else
  {
    v3 = 0;
  }
  UnDecorator::getDataType(a1, v3);
  UnDecorator::getDataIndirectType((int)v7);
  v8[0] = v7[0];
  v8[1] = v7[1];
  DName::operator+=((DName *)v8, 32);
  v4 = DName::operator+(v8, (DName *)v6, a2);
  *(_DWORD *)v3 = *(_DWORD *)v4;
  *((_DWORD *)v3 + 1) = *((_DWORD *)v4 + 1);
  return a1;
}
