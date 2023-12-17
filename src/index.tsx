const Awesomelibrary = require('./NativeAwesomelibrary').default;

export function multiply(a: number, b: number): number {
  return Awesomelibrary.multiply(a, b);
}
